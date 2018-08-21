//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDPUIBaseController.h"

#import "FMIPCommandProcessingProtocol.h"

@class FMIPCommandContext, NSString;

@interface FMIPCDPUIController : CDPUIBaseController <FMIPCommandProcessingProtocol>
{
    FMIPCommandContext *commandContext;
}

@property(retain, nonatomic) FMIPCommandContext *commandContext; // @synthesize commandContext;
- (void).cxx_destruct;
- (void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(_Bool)arg3 validator:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
