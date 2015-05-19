//
//  ViewController.h
//  LittleToDoApp
//
//  Created by Marty Lavender on 5/19/15.
//  Copyright (c) 2015 Marty Lavender. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) IBOutlet UITextField *toDoItem;
@property (nonatomic, strong) IBOutlet UITableView *tableView;

- (IBAction)deleteToDoItem:(id)sender;
- (IBAction)addToDoItem:(id)sender;



@end