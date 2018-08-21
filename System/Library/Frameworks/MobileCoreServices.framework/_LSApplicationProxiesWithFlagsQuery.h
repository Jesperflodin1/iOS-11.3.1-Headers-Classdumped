/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/_LSBundleQuery.h>

@interface _LSApplicationProxiesWithFlagsQuery : _LSBundleQuery {

	unsigned _plistFlags;
	unsigned long long _bundleFlags;

}

@property (nonatomic,readonly) unsigned plistFlags;                         //@synthesize plistFlags=_plistFlags - In the implementation block
@property (nonatomic,readonly) unsigned long long bundleFlags;              //@synthesize bundleFlags=_bundleFlags - In the implementation block
+(id)queryWithPlistFlags:(unsigned)arg1 bundleFlags:(unsigned long long)arg2 ;
+(BOOL)supportsSecureCoding;
-(unsigned)plistFlags;
-(unsigned long long)bundleFlags;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_requiresDatabaseMappingEntitlement;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

