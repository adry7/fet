/***************************************************************************
                          constraintstudentsmaxdaysperweekform.h  -  description
                             -------------------
    begin                : 2013
    copyright            : (C) 2013 by Lalescu Liviu
    email                : Please see http://lalescu.ro/liviu/ for details about contacting Liviu Lalescu (in particular, you can find here the e-mail address)
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef CONSTRAINTSTUDENTSMAXDAYSPERWEEKFORM_H
#define CONSTRAINTSTUDENTSMAXDAYSPERWEEKFORM_H

#include "ui_constraintstudentsmaxdaysperweekform_template.h"
#include "timetable_defs.h"
#include "timetable.h"
#include "fet.h"

class ConstraintStudentsMaxDaysPerWeekForm : public QDialog, Ui::ConstraintStudentsMaxDaysPerWeekForm_template  {
	Q_OBJECT
public:
	TimeConstraintsList visibleConstraintsList;

	ConstraintStudentsMaxDaysPerWeekForm(QWidget* parent);
	~ConstraintStudentsMaxDaysPerWeekForm();

	bool filterOk(TimeConstraint* ctr);

public slots:
	void constraintChanged(int index);
	void addConstraint();
	void modifyConstraint();
	void removeConstraint();

	void filterChanged();
};

#endif
