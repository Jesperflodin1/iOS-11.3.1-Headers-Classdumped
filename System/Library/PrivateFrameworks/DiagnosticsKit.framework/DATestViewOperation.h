/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol DATestViewOperationDelegate;
@class NSDictionary, UIViewController, DKMutableDiagnosticResult, DATestViewController;

@interface DATestViewOperation : NSOperation {

	BOOL _cancelled;
	BOOL _executing;
	BOOL _finished;
	NSDictionary* _parameters;
	NSDictionary* _specifications;
	NSDictionary* _predicates;
	id<DATestViewOperationDelegate> _delegate;
	UIViewController* _viewController;
	DKMutableDiagnosticResult* _testResult;
	DATestViewController* _weakViewController;

}

@property (assign,nonatomic,__weak) DATestViewController * weakViewController;              //@synthesize weakViewController=_weakViewController - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                                     //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSDictionary * specifications;                                 //@synthesize specifications=_specifications - In the implementation block
@property (nonatomic,retain) NSDictionary * predicates;                                     //@synthesize predicates=_predicates - In the implementation block
@property (assign,nonatomic,__weak) id<DATestViewOperationDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                             //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) DKMutableDiagnosticResult * testResult;                        //@synthesize testResult=_testResult - In the implementation block
-(void)setTestResult:(DKMutableDiagnosticResult *)arg1 ;
-(DKMutableDiagnosticResult *)testResult;
-(void)cancel;
-(id<DATestViewOperationDelegate>)delegate;
-(void)setDelegate:(id<DATestViewOperationDelegate>)arg1 ;
-(NSDictionary *)parameters;
-(void)start;
-(BOOL)isCancelled;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)_cancel;
-(void)_finish;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finish;
-(void)setPredicates:(NSDictionary *)arg1 ;
-(BOOL)isAsynchronous;
-(NSDictionary *)predicates;
-(NSDictionary *)specifications;
-(DATestViewController *)weakViewController;
-(void)setSpecifications:(NSDictionary *)arg1 ;
-(void)setWeakViewController:(DATestViewController *)arg1 ;
@end
