function calculateGrade() {
    let score;
    let gradeLetter;
    let gradeNumeric;

    while (true) {
        const input = prompt("Enter the score for the subject (0-100):");
        score = parseFloat(input);

        if (isNaN(score) || score < 0 || score > 100) {
            alert("Invalid input. Please enter a score between 0 and 100.");
        } else {
            break;
        }
    }

    if (score >= 80) {
        gradeLetter = 'A';
        gradeNumeric = 4.0;
    } else if (score >= 70) {
        gradeLetter = 'B';
        gradeNumeric = 3.0;
    } else if (score >= 60) {
        gradeLetter = 'C';
        gradeNumeric = 2.0;
    } else if (score >= 50) {
        gradeLetter = 'D';
        gradeNumeric = 1.0;
    } else {
        gradeLetter = 'F';
        gradeNumeric = 0.0;
    }

    // Prepare for table display
    const headerScore = "Score";
    const headerGrade = "Grade";
    const headerNumeric = "Numeric Grade";

    // Define field widths
    const scoreWidth = 10;
    const gradeWidth = 10;
    const numericWidth = 15;

    // Helper to pad strings
    function padRight(str, length) {
        return String(str).padEnd(length, ' ');
    }

    function padLeft(str, length) {
        return String(str).padStart(length, ' ');
    }

    console.log(
        padRight(headerScore, scoreWidth) +
        padRight(headerGrade, gradeWidth) +
        padRight(headerNumeric, numericWidth)
    );
    console.log("-".repeat(scoreWidth + gradeWidth + numericWidth));
    console.log(
        padLeft(score.toFixed(2), scoreWidth) +
        padRight(gradeLetter, gradeWidth) +
        padLeft(gradeNumeric.toFixed(1), numericWidth)
    );
}

calculateGrade();