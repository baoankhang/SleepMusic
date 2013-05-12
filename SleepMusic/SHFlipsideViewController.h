//
//  SHFlipsideViewController.h
//  SleepMusic
//
//  Created by sherwin.chen on 13-5-11.
//  Copyright (c) 2013年 sherwin.chen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <Foundation/NSTimer.h>

@class SHFlipsideViewController;

@protocol SHFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(SHFlipsideViewController *)controller;
@end

@interface SHFlipsideViewController : UIViewController
<UITableViewDataSource,UITableViewDelegate,AVAudioPlayerDelegate>
{
    AVAudioPlayer *thePlayer;
}

@property (retain, nonatomic) IBOutlet UITableView *myTableView;
@property (assign, nonatomic) id <SHFlipsideViewControllerDelegate> delegate;

@property (nonatomic, retain) NSMutableArray *myTableDataSource;
- (IBAction)done:(id)sender;

@end
