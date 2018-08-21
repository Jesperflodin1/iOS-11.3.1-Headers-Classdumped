/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFUbiquityBaselineOperation.h>

@class PFUbiquityBaselineHeuristics;

@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation {

	PFUbiquityBaselineHeuristics* _heuristics;

}

@property (assign) NSObject*<PFUbiquityBaselineRollOperationDelegate> delegate; 
-(BOOL)haveConsistentStateForBaselineRoll;
-(BOOL)rollBaselineWithError:(id*)arg1 ;
-(id)init;
-(NSObject*<PFUbiquityBaselineRollOperationDelegate>)delegate;
-(void)setDelegate:(NSObject*<PFUbiquityBaselineRollOperationDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)main;
-(id)retainedDelegate;
@end
