/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFUbiquityBaselineOperation.h>

@interface PFUbiquityBaselineRecoveryOperation : PFUbiquityBaselineOperation

@property (assign) NSObject*<PFUbiquityBaselineRecoveryOperationDelegate> delegate; 
-(BOOL)electBaselineURLFromVersions:(id)arg1 withBaseline:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasCurrentBaseline;
-(BOOL)conflictsExistForBaseline:(id)arg1 ;
-(BOOL)resolveConflictsForBaseline:(id)arg1 withError:(id*)arg2 ;
-(BOOL)shouldReplaceLocalStoreWithBaseline:(id)arg1 ;
-(BOOL)replaceLocalStoreWithBaseline:(id)arg1 error:(id*)arg2 ;
-(id)electAncestorBaselineForConflictedBaselines:(id)arg1 dissentingBaselines:(id*)arg2 ;
-(NSObject*<PFUbiquityBaselineRecoveryOperationDelegate>)delegate;
-(void)setDelegate:(NSObject*<PFUbiquityBaselineRecoveryOperationDelegate>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)main;
-(id)retainedDelegate;
@end

