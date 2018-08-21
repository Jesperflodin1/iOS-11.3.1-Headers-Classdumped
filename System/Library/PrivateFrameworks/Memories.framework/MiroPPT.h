/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, UIViewController;

@interface MiroPPT : NSObject {

	NSString* _currentTestName;
	NSDictionary* _currentTestOptions;
	UIViewController* _playerViewController;

}

@property (nonatomic,retain) NSString * currentTestName;                           //@synthesize currentTestName=_currentTestName - In the implementation block
@property (nonatomic,retain) NSDictionary * currentTestOptions;                    //@synthesize currentTestOptions=_currentTestOptions - In the implementation block
@property (nonatomic,retain) UIViewController * playerViewController;              //@synthesize playerViewController=_playerViewController - In the implementation block
+(id)sharedInstance;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(UIViewController *)playerViewController;
-(void)setPlayerViewController:(UIViewController *)arg1 ;
-(void)setCurrentTestName:(NSString *)arg1 ;
-(void)setCurrentTestOptions:(NSDictionary *)arg1 ;
-(NSString *)currentTestName;
-(int)currentTestIterations;
-(int)currentTestOffset;
-(int)currentTestLength;
-(void)startedCurrentTest;
-(void)finishedCurrentTest;
-(NSDictionary *)currentTestOptions;
-(void)failedCurrentTest;
-(BOOL)dismissAllModalViewControllers;
@end

