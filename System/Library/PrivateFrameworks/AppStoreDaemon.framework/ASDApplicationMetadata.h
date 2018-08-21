/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ASDApplicationMetadata : NSObject <NSCopying, NSSecureCoding> {

	NSString* _accountName;
	NSNumber* _accountID;
	NSString* _altDSID;
	NSString* _artworkPath;
	NSString* _bundleID;
	NSNumber* _externalVersionIdentifier;
	NSNumber* _installOrder;
	NSNumber* _itemID;
	NSString* _itemName;
	NSNumber* _purchaserDSID;
	NSNumber* _storeFront;
	NSString* _vendorName;

}

@property (nonatomic,copy) NSString * accountName;                            //@synthesize accountName=_accountName - In the implementation block
@property (nonatomic,copy) NSNumber * accountID;                              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                                //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy) NSString * artworkPath;                            //@synthesize artworkPath=_artworkPath - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSNumber * externalVersionIdentifier;              //@synthesize externalVersionIdentifier=_externalVersionIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * installOrder;                           //@synthesize installOrder=_installOrder - In the implementation block
@property (nonatomic,copy) NSNumber * itemID;                                 //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * itemName;                               //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,copy) NSNumber * purchaserDSID;                          //@synthesize purchaserDSID=_purchaserDSID - In the implementation block
@property (nonatomic,copy) NSNumber * storeFront;                             //@synthesize storeFront=_storeFront - In the implementation block
@property (nonatomic,copy) NSString * vendorName;                             //@synthesize vendorName=_vendorName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleID;
-(NSNumber *)externalVersionIdentifier;
-(NSNumber *)purchaserDSID;
-(void)setExternalVersionIdentifier:(NSNumber *)arg1 ;
-(NSString *)itemName;
-(void)setAccountID:(NSNumber *)arg1 ;
-(NSString *)artworkPath;
-(void)setArtworkPath:(NSString *)arg1 ;
-(NSNumber *)installOrder;
-(void)setInstallOrder:(NSNumber *)arg1 ;
-(void)setPurchaserDSID:(NSNumber *)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(void)setVendorName:(NSString *)arg1 ;
-(void)setItemName:(NSString *)arg1 ;
-(NSString *)accountName;
-(void)setAccountName:(NSString *)arg1 ;
-(NSString *)altDSID;
-(NSNumber *)itemID;
-(NSNumber *)accountID;
-(void)setAltDSID:(NSString *)arg1 ;
-(id)initWithBundleID:(id)arg1 ;
-(NSString *)vendorName;
-(NSNumber *)storeFront;
-(void)setStoreFront:(NSNumber *)arg1 ;
@end

