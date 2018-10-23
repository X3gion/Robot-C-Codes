#pragma config(Motor,  port2,           backleftmotor, tmotorVex269_MC29, openLoop)
#pragma config(Motor,  port5,           frontleftmotor, tmotorVex269_MC29, openLoop)
#pragma config(Motor,  port6,           frontrightmotor, tmotorVex269_MC29, openLoop)
#pragma config(Motor,  port9,           backrightmotor, tmotorVex269_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
  Project Title: Tumbler #1
  Team Members: David, Ethan, John, Hunter
  Date: 10/16/2018
  Section: Block B


  Task Description:
	Get robot to run forward across a table in a straight line

  Pseudocode:
	Turn motors so it moves forward
	Continues to right before a wall when it stops

*/

task main()
{											//Program begins, insert code within curly braces
wait1Msec(1000);
startMotor(backleftmotor, -63);
startMotor(frontleftmotor, 63);
startMotor(frontrightmotor, 63);
startMotor(backrightmotor, -63);
wait(3.4);
stopMotor(backleftmotor);
stopMotor(frontleftmotor);
stopMotor(frontrightmotor);
stopMotor(backrightmotor);
}
