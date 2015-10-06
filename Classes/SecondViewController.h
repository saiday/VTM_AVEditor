//
//  SecondViewController.h
//  VTM_AVEditor
//
//  Created by Chris Adamson on 10/16/10.
//  Copyright 2010 Subsequently and Furthermore, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface SecondViewController : UIViewController {
	AVMutableComposition *composition;
	AVMutableCompositionTrack *musicTrack;
	AVURLAsset *musicAsset;
	UIView *previewView;
	UISlider *timeSlider;
	UIProgressView *exportProgressView;
	AVPlayer *player;
	UIButton *playPauseButton;
	BOOL isScrubbing;
	BOOL wasPlaying;
	BOOL addedMusicTrack;
	NSTimer *sliderTimer;
	NSTimer *exportTimer;

}

@property (nonatomic, retain) AVMutableComposition *composition;
@property (nonatomic, retain) IBOutlet UIView *previewView;
@property (nonatomic, retain) IBOutlet  UISlider *timeSlider;
@property (nonatomic, retain) IBOutlet UIButton *playPauseButton;
@property (nonatomic, retain) IBOutlet UIProgressView *exportProgressView;

-(IBAction) exportButtonTapped: (id) sender;
-(IBAction) timeSliderValueChanged: (id) sender;
-(IBAction) playPauseButtonTapped: (id) sender;
-(IBAction) timeSliderTouchDown: (id) sender;
-(IBAction) timeSliderTouchUp: (id) sender;

@end
