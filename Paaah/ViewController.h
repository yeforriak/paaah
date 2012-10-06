//
//  ViewController.h
//  Paaah
//
//  Created by yeforriak on 24/10/2011.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
//#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVAudioPlayer.h>



@interface ViewController : UIViewController <AVAudioPlayerDelegate>{
    UIProgressView *_progressView;
    int numberOfInjections;
    AVAudioPlayer *audioPlayer;
}

@property (nonatomic, retain) IBOutlet UIProgressView *progressView;

-(IBAction)buttonPressed:(id)sender;
-(void)playSound;

@end
