/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNCommuteDestinationUpdaterDelegate <NSObject>
@property (nonatomic,readonly) BOOL isMapsActive; 
@required
-(void)destinationUpdater:(id)arg1 didUpdateDestination:(id)arg2;
-(void)destinationUpdaterDidArrive:(id)arg1;
-(BOOL)isMapsActive;

@end
