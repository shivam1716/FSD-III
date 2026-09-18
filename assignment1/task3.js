console.log("1. Synchronous code before scheduling callbacks.");
process.nextTick(() => {
    console.log("3. process.nextTick() callback executed.");
});
setTimeout(() => {
    console.log("4. setTimeout() callback executed.");
}, 0);
setImmediate(() => {
    console.log("5. setImmediate() callback executed.");
});
console.log("2. Synchronous code after scheduling callbacks.");
