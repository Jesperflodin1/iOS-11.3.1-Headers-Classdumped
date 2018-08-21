/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/MiroMemoryEditorBasePlayerViewController.h>

@protocol MiroPlayerControlling;
@class MiroMemory;

@interface MiroMemoryEditorDebugContainerViewController : MiroMemoryEditorBasePlayerViewController {

	id<MiroPlayerControlling> _playerController;
	MiroMemory* _memory;
	unsigned long long _pickerMode;

}

@property (assign,nonatomic,__weak) id<MiroPlayerControlling> playerController;              //@synthesize playerController=_playerController - In the implementation block
@property (assign,nonatomic,__weak) MiroMemory * memory;                                     //@synthesize memory=_memory - In the implementation block
@property (assign,nonatomic) unsigned long long pickerMode;                                  //@synthesize pickerMode=_pickerMode - In the implementation block
-(void)didReceiveMemoryWarning;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(MiroMemory *)memory;
-(void)setMemory:(MiroMemory *)arg1 ;
-(id<MiroPlayerControlling>)playerController;
-(void)setPlayerController:(id<MiroPlayerControlling>)arg1 ;
-(unsigned long long)pickerMode;
-(void)setPickerMode:(unsigned long long)arg1 ;
@end

