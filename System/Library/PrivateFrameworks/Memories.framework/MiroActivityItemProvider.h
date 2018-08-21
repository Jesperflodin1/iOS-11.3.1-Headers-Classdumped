/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivityItemProvider.h>
#import <libobjc.A.dylib/ExportDelegate.h>

@protocol MiroActivityItemProviderDelegate, MiroPreventDismissalDelegate, OS_dispatch_semaphore;
@class UIImage, MiroMovie, MiroExportController, PHActivityProgressViewController, NSString, Project, NSObject, UIViewController;

@interface MiroActivityItemProvider : UIActivityItemProvider <ExportDelegate> {

	BOOL _debugDisableProgressUpdates;
	BOOL _playAltClips;
	BOOL _lowBatteryCancelled;
	BOOL _userCancelled;
	id<MiroActivityItemProviderDelegate> _delegate;
	id<MiroPreventDismissalDelegate> _preventDismissalDelegate;
	UIImage* _posterImageHorizontal;
	UIImage* _posterImageVertical;
	MiroMovie* _miroMovie;
	MiroExportController* _exportController;
	PHActivityProgressViewController* _progressController;
	NSString* _preset;
	Project* _project;
	double _progress;
	NSObject*<OS_dispatch_semaphore> _readyToReturnItem;

}

@property (nonatomic,retain) MiroExportController * exportController;                                       //@synthesize exportController=_exportController - In the implementation block
@property (nonatomic,retain) PHActivityProgressViewController * progressController;                         //@synthesize progressController=_progressController - In the implementation block
@property (nonatomic,retain) NSString * preset;                                                             //@synthesize preset=_preset - In the implementation block
@property (nonatomic,retain) Project * project;                                                             //@synthesize project=_project - In the implementation block
@property (assign,nonatomic) double progress;                                                               //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL lowBatteryCancelled;                                                      //@synthesize lowBatteryCancelled=_lowBatteryCancelled - In the implementation block
@property (assign,nonatomic) BOOL userCancelled;                                                            //@synthesize userCancelled=_userCancelled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> readyToReturnItem;                            //@synthesize readyToReturnItem=_readyToReturnItem - In the implementation block
@property (assign,nonatomic,__weak) id<MiroActivityItemProviderDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MiroPreventDismissalDelegate> preventDismissalDelegate;              //@synthesize preventDismissalDelegate=_preventDismissalDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presenter; 
@property (nonatomic,retain) UIImage * posterImageHorizontal;                                               //@synthesize posterImageHorizontal=_posterImageHorizontal - In the implementation block
@property (nonatomic,retain) UIImage * posterImageVertical;                                                 //@synthesize posterImageVertical=_posterImageVertical - In the implementation block
@property (nonatomic,retain) MiroMovie * miroMovie;                                                         //@synthesize miroMovie=_miroMovie - In the implementation block
@property (assign,nonatomic) BOOL playAltClips;                                                             //@synthesize playAltClips=_playAltClips - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)item;
-(id<MiroActivityItemProviderDelegate>)delegate;
-(void)setDelegate:(id<MiroActivityItemProviderDelegate>)arg1 ;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(id)initWithPlaceholderItem:(id)arg1 ;
-(NSString *)preset;
-(void)setPreset:(NSString *)arg1 ;
-(void)setPlayAltClips:(BOOL)arg1 ;
-(Project *)project;
-(BOOL)playAltClips;
-(MiroMovie *)miroMovie;
-(void)setMiroMovie:(MiroMovie *)arg1 ;
-(void)setProject:(Project *)arg1 ;
-(id<MiroPreventDismissalDelegate>)preventDismissalDelegate;
-(void)setReadyToReturnItem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)cancelExport;
-(void)beginExport;
-(NSObject*<OS_dispatch_semaphore>)readyToReturnItem;
-(BOOL)userCancelled;
-(void)setUserCancelled:(BOOL)arg1 ;
-(BOOL)lowBatteryCancelled;
-(void)setLowBatteryCancelled:(BOOL)arg1 ;
-(void)setProgressController:(PHActivityProgressViewController *)arg1 ;
-(PHActivityProgressViewController *)progressController;
-(MiroExportController *)exportController;
-(void)setExportController:(MiroExportController *)arg1 ;
-(UIImage *)posterImageVertical;
-(UIImage *)posterImageHorizontal;
-(void)exportController:(id)arg1 progressedTo:(float)arg2 preventBackslide:(BOOL)arg3 ;
-(UIViewController *)presenter;
-(void)setPresenter:(UIViewController *)arg1 ;
-(void)didFinishExport;
-(id)initWithProject:(id)arg1 ;
-(void)setPreventDismissalDelegate:(id<MiroPreventDismissalDelegate>)arg1 ;
-(void)setPosterImageHorizontal:(UIImage *)arg1 ;
-(void)setPosterImageVertical:(UIImage *)arg1 ;
@end

