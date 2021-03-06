//
//  CFViewController.h
//  CashFLow
//
//  Created by Sam Watson on 15/07/13.
//  Copyright (c) 2013 Sam Watson. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "CFNumberPad.h"
#import "SWSelectionSlider.h"

@class CFPurchaseListCell;

@interface CFViewController : UIViewController <CFNumberPadDelegate, UITableViewDataSource, UITableViewDelegate, SWSelectionSliderDelegate, SWSelectionSliderDataSource>

@property (strong, nonatomic)   IBOutlet    UILabel             *cashLabel;
@property (strong, nonatomic)   IBOutlet    UIButton            *startButton;
@property (strong, nonatomic)   IBOutlet    UIButton            *hourlyRateButton;

@property (strong, nonatomic)               SWSelectionSlider   *jobSelectionSlider;

@property (strong, nonatomic)               NSArray             *purchaseList;
@property (strong, nonatomic)   IBOutlet    UITableView         *purchaseListTableView;
@property (strong, nonatomic)               UIView              *createLuxuryView;

@property (strong, nonatomic)               UIImageView         *tableViewShadow;
@property (strong, nonatomic)               UIView              *tableViewSeparatorLine;

@property (nonatomic)                       float               lastStopValue;

- (IBAction)startButtonPressed:(id)sender;
- (IBAction)hourlyRateButtonPressed:(id)sender;

@end
