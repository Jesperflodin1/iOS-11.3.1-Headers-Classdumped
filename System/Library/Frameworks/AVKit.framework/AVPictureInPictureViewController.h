/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/PGPictureInPictureViewController.h>

@protocol AVPictureInPictureViewControllerDelegate;
@class AVPlayerController, AVPictureInPicturePlayerLayerView, NSString;

@interface AVPictureInPictureViewController : UIViewController <PGPictureInPictureViewController> {

	id<AVPictureInPictureViewControllerDelegate> _delegate;
	SCD_Struct_AV5 _delegateRespondsTo;
	AVPlayerController* _playerController;

}

@property (nonatomic,retain) AVPlayerController * playerController;                                              //@synthesize playerController=_playerController - In the implementation block
@property (nonatomic,readonly) AVPictureInPicturePlayerLayerView * pictureInPicturePlayerLayerView; 
@property (assign,nonatomic,__weak) id<AVPictureInPictureViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldShowAlternateActionButtonImage; 
@property (nonatomic,readonly) BOOL shouldShowLoadingIndicator; 
+(id)keyPathsForValuesAffectingShouldShowAlternateActionButtonImage;
+(id)keyPathsForValuesAffectingShouldShowLoadingIndicator;
-(id<AVPictureInPictureViewControllerDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<AVPictureInPictureViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(AVPictureInPicturePlayerLayerView *)pictureInPicturePlayerLayerView;
-(id)initWithPictureInPicturePlayerLayerView:(id)arg1 ;
-(void)willAnimatePictureInPictureStart;
-(void)didAnimatePictureInPictureStop;
-(void)actionButtonTapped;
-(BOOL)shouldShowAlternateActionButtonImage;
-(BOOL)shouldShowLoadingIndicator;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
@end
