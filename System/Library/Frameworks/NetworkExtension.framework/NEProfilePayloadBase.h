/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEProfilePayloadBaseDelegate.h>

@class NSDictionary, NSMutableDictionary;

@interface NEProfilePayloadBase : NSObject <NEProfilePayloadBaseDelegate> {

	NSDictionary* _payloadAtom;
	NSMutableDictionary* _pendingCertificates;
	NSDictionary* _pluginUpgradeInfo;

}

@property (nonatomic,retain) NSDictionary * payloadAtom;                   //@synthesize payloadAtom=_payloadAtom - In the implementation block
@property (retain) NSMutableDictionary * pendingCertificates;              //@synthesize pendingCertificates=_pendingCertificates - In the implementation block
@property (retain) NSDictionary * pluginUpgradeInfo;                       //@synthesize pluginUpgradeInfo=_pluginUpgradeInfo - In the implementation block
-(id)validatePayload;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPayload:(id)arg1 ;
-(NSDictionary *)payloadAtom;
-(BOOL)addCertificatePending:(id)arg1 certificateTag:(id)arg2 accessGroup:(id)arg3 ;
-(void)setPayloadAtom:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)pendingCertificates;
-(void)setPendingCertificates:(NSMutableDictionary *)arg1 ;
-(id)getPreprocessedPayloadContents;
-(BOOL)setPostprocessedPayloadContents:(id)arg1 ;
-(BOOL)addCertificatePending:(id)arg1 certificateTag:(id)arg2 ;
-(NSDictionary *)pluginUpgradeInfo;
-(void)setPluginUpgradeInfo:(NSDictionary *)arg1 ;
@end

