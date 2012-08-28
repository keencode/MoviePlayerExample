//
//  ViewController.h
//  FullscreenVideoTest
//
//  Created by Peng on 8/27/12.
//  Copyright (c) 2012 Cocoa Star Apps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>

@interface ViewController : UIViewController

@property (nonatomic, strong) MPMoviePlayerController *moviePlayer;
@property (nonatomic, strong) NSURL *videoAssetURL;

- (IBAction)playVideoWithMoviePlayerController:(id)sender;
- (IBAction)playVideoWithMoviePlayerViewController:(id)sender;

@end
