# Demeter Project - COMPROG
Laboratory Project

Price Scheduling Management System
Barangay Scheduling Management System

Project Description:

The “Barangay Scheduling Management System” is a website or an app that could send notifications or emails regarding the happenings in a specific barangay. This could be general announcements like the time of the collection of garbage, curfew reminders, health reminders, recent news in the barangay, general meetings, giveaways, etc.
The “Barangay Scheduling Management System” is a website or an app that could help in scheduling appointments in barangay.
This includes scheduling appointments, viewing the schedule of appointments, and exiting the program itself. Scheduling appointment 
includes the name, purpose, data, and time of the appointment.

IPO

Input:
User is prompted to select an action from a menu: schedule an appointment, view scheduled appointments, or exit the program.
If the user selects "schedule an appointment", they are prompted to enter the name, purpose, date, and time of the appointment.

Process:
The program stores the inputted appointment details into a struct.
The program adds the struct to an array of appointments.

Output:
If the appointment is successfully added, the program outputs a success message.
If the appointment cannot be added because the array of appointments is full, the program outputs a message indicating this.
If the user chooses to view appointments, the program outputs the name, purpose, date, and time of all appointments in the array.
