/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>
#import <libobjc.A.dylib/VSViewServiceHostViewControllerDelegate.h>

@protocol VSViewServiceRequestOperationDelegate;
@class VSViewServiceRequest, VSOptional, VSViewServiceHostViewController, NSUUID, NSString;

@interface VSViewServiceRequestOperation : VSAsyncOperation <VSViewServiceHostViewControllerDelegate> {

	BOOL _isPresentingViewController;
	VSViewServiceRequest* _viewServiceRequest;
	id<VSViewServiceRequestOperationDelegate> _delegate;
	VSOptional* _result;
	VSViewServiceHostViewController* _viewServiceHostViewController;
	NSUUID* _requestID;

}

@property (nonatomic,retain) VSOptional * result;                                                          //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) VSViewServiceHostViewController * viewServiceHostViewController;              //@synthesize viewServiceHostViewController=_viewServiceHostViewController - In the implementation block
@property (nonatomic,copy) NSUUID * requestID;                                                             //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy,readonly) VSViewServiceRequest * viewServiceRequest;                             //@synthesize viewServiceRequest=_viewServiceRequest - In the implementation block
@property (assign,nonatomic,__weak) id<VSViewServiceRequestOperationDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cancel;
-(id<VSViewServiceRequestOperationDelegate>)delegate;
-(void)setDelegate:(id<VSViewServiceRequestOperationDelegate>)arg1 ;
-(void)_dismissViewController;
-(VSOptional *)result;
-(VSViewServiceHostViewController *)viewServiceHostViewController;
-(void)_dismissViewControllerIfRequired;
-(VSViewServiceRequest *)viewServiceRequest;
-(void)setViewServiceHostViewController:(VSViewServiceHostViewController *)arg1 ;
-(id)initWithViewServiceRequest:(id)arg1 ;
-(void)setRequestID:(NSUUID *)arg1 ;
-(NSUUID *)requestID;
-(void)_presentViewController;
-(void)setResult:(VSOptional *)arg1 ;
-(void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3 ;
-(void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3 ;
-(void)viewServiceHostViewController:(id)arg1 didCancelRequest:(id)arg2 ;
-(void)viewServiceHostViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2 ;
-(void)presentViewServiceHostViewController:(id)arg1 ;
-(void)dismissViewServiceHostViewController:(id)arg1 ;
-(BOOL)viewServiceHostViewController:(id)arg1 shouldAuthenticateAccountProviderWithIdentifier:(id)arg2 ;
-(void)finishExecutionIfPossible;
-(void)executionDidBegin;
@end
