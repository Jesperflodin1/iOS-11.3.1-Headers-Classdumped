/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber, NSString;

@interface ASProvisionResponse : ASItem {

	NSArray* _policies;
	NSNumber* _status;
	BOOL _remoteWipe;
	BOOL _accountOnlyRemoteWipe;
	NSString* _policyType;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
-(id)init;
-(id)description;
-(id)status;
-(id)policyType;
-(void)_setStatus:(id)arg1 ;
-(id)initWithPolicyType:(id)arg1 ;
-(id)asParseRules;
-(void)_setPolicies:(id)arg1 ;
-(void)_setRemoteWipe:(id)arg1 ;
-(void)_setAccountOnlyRemoteWipe:(id)arg1 ;
-(void)setPolicyType:(id)arg1 ;
-(BOOL)remoteWipe;
-(BOOL)accountOnlyRemoteWipe;
-(id)policies;
@end

