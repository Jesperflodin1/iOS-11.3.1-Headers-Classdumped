//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADClearcutCommandExecuting-Protocol.h"

@class JSContext, JSVirtualMachine, NSString;

@interface GADClearcutJSCoreCommandExecutor : NSObject <GADClearcutCommandExecuting>
{
    JSVirtualMachine *_virtualMachine;
    JSContext *_context;
}

- (void).cxx_destruct;
- (void)handleNetworkIOWithParameters:(id)arg1 successCallback:(id)arg2 failureCallback:(id)arg3;
- (void)asynchronouslyExecuteCommands:(id)arg1;
- (_Bool)isLoaded;
- (id)initWithScript:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

