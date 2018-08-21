/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSOpenResourceOperationDelegate.h>

@protocol LSOpenResourceOperationDelegate;
@class NSOperation, NSString;

@interface _LSOpenResourceOperationDelegateWrapper : NSObject <LSOpenResourceOperationDelegate> {

	NSOperation* _operation;
	id<LSOpenResourceOperationDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithOperation:(id)arg1 wrappedDelegate:(id)arg2 ;
-(void)dealloc;
-(void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2 ;
-(void)openResourceOperationDidComplete:(id)arg1 ;
-(void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2 ;
@end

