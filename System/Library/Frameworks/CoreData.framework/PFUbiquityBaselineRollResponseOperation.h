/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFUbiquityBaselineRollOperation.h>

@interface PFUbiquityBaselineRollResponseOperation : PFUbiquityBaselineRollOperation

@property (assign) NSObject*<PFUbiquityBaselineRollResponseOperationDelegate> delegate; 
-(BOOL)canAdoptBaseline:(id)arg1 byReplacingLocalStoreFile:(BOOL*)arg2 withStack:(id)arg3 withError:(id*)arg4 ;
-(NSObject*<PFUbiquityBaselineRollResponseOperationDelegate>)delegate;
-(void)setDelegate:(NSObject*<PFUbiquityBaselineRollResponseOperationDelegate>)arg1 ;
-(void)main;
-(id)retainedDelegate;
@end

