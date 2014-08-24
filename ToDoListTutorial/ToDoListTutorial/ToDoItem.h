//
//  ToDoItem.h
//  ToDoListTutorial
//
//  Created by jesus was here on 8/15/14.
//  Copyright (c) 2014 SillyStuff. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
