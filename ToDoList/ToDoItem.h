//
//  ToDoItem.h
//  ToDoList
//
//  Created by Erica Wright on 2015-08-01.
//  Copyright (c) 2015 Erica Wright. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end

