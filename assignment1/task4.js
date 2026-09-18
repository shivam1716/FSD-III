const EventEmitter = require("events");
const studentActivityTracker = new EventEmitter();
studentActivityTracker.on("login", (studentName) => {
    console.log(`${studentName} logged in.`);
});
studentActivityTracker.on("courseRegistration", (courseName) => {
    console.log(`Course registered: ${courseName}`);
});
studentActivityTracker.on("notification", (message) => {
    console.log(`Notification: ${message}`);
});
studentActivityTracker.on("logout", (studentName) => {
    console.log(`${studentName} logged out.`);
});
const studentName = "Rahul";
studentActivityTracker.emit("login", studentName);
studentActivityTracker.emit(
    "courseRegistration",
    "Full Stack Development"
);
studentActivityTracker.emit(
    "notification",
    "Your course registration was successful."
);
studentActivityTracker.emit("logout", studentName);
