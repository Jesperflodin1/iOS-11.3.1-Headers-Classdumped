/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXMOutputManager;

@interface AXMFeedbackGenerator : NSObject {

	BOOL _isFeedbackEnabled;
	AXMOutputManager* _outputManager;

}

@property (nonatomic,retain) AXMOutputManager * outputManager;              //@synthesize outputManager=_outputManager - In the implementation block
-(void)dealloc;
-(void)setOutputManager:(AXMOutputManager *)arg1 ;
-(void)disableFeedback;
-(void)didEnableFeedback;
-(AXMOutputManager *)outputManager;
-(void)didDisableFeedback;
-(id)initWithOutputManager:(id)arg1 ;
-(void)enableFeedback;
@end
