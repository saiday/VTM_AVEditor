//
//  FirstViewController.h
//  VTM_AVEditor
//
//  Created by Chris Adamson on 10/16/10.
//  Copyright 2010 Subsequently and Furthermore, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "SecondViewController.h"

@interface FirstViewController : UIViewController {
	AVURLAsset *sourceAsset;
	AVPlayer *player;
	UIView *playerView;
	UILabel *inLabel;
	UILabel *outLabel;
	UIView *previewView;
	UISlider *timeSlider;
	SecondViewController *targetController;
	
	Float64 inSeconds, outSeconds;
}

@property (nonatomic, retain) AVURLAsset *sourceAsset;
@property (nonatomic, retain) IBOutlet UIView *playerView;
@property (nonatomic, retain) IBOutlet UILabel *inLabel;
@property (nonatomic, retain) IBOutlet UILabel *outLabel;
@property (nonatomic, retain) IBOutlet UIView *previewView;
@property (nonatomic, retain) IBOutlet UISlider *timeSlider;
@property (nonatomic, retain) IBOutlet SecondViewController *targetController;

-(IBAction) inButtonTapped: (id) sender;
-(IBAction) outButtonTapped: (id) sender;
-(IBAction) cutButtonTapped: (id) sender;
-(IBAction) timeSliderValueChanged: (id) sender;

@end
