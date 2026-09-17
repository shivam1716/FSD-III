const fs = require('fs');

// 1. Create / Write student information
fs.writeFileSync(
    'student.txt',
    'Name: Rahul\n' +
    'Roll Number: 101\n' +
    'Branch: CSE\n' +
    'Semester: 3\n'
);

console.log('Student file created successfully.');

// 2. Read and display student information
let data = fs.readFileSync('student.txt', 'utf8');

console.log('\nStudent Details:');
console.log(data);

// 3. Update / Append additional information
fs.appendFileSync(
    'student.txt',
    'Subject: Full Stack Development\n' +
    'Marks: 85\n' +
    'Attendance: 92%\n'
);

console.log('Student information updated successfully.');

// 4. Read the updated file
data = fs.readFileSync('student.txt', 'utf8');

console.log('\nUpdated Student Details:');
console.log(data);

console.log('All operations completed successfully.');
