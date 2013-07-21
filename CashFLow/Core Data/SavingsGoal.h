//
//  SavingsGoal.h
//  CashFLow
//
//  Created by Sam Watson on 22/07/13.
//  Copyright (c) 2013 Sam Watson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface SavingsGoal : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSNumber * price;
@property (nonatomic, retain) NSNumber * identifier;
@property (nonatomic, retain) NSNumber * deleted;
@property (nonatomic, retain) NSNumber * completed;

@end
