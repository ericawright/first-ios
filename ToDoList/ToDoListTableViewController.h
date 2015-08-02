//
//  ToDoListTableViewController.h
//  ToDoList
//
//  Created by Erica Wright on 2015-08-01.
//  Copyright (c) 2015 Erica Wright. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ToDoItem.h"


@interface ToDoListTableViewController : UITableViewController
@property ToDoItem *toDoItem;
- (IBAction)unwindToList:(UIStoryboardSegue *)segue;
@end

