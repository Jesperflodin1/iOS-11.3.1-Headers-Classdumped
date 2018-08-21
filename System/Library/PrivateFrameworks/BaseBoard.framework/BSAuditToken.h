/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BSAuditToken : NSObject <NSCopying, BSXPCCoding, NSSecureCoding> {

	NSString* _bundleID;
	SCD_Struct_BS15 _auditToken;

}

@property (nonatomic,copy) NSString * bundleID;                        //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) int pid; 
@property (nonatomic,readonly) SCD_Struct_BS15 realToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tokenFromXPCConnection:(id)arg1 ;
+(id)tokenForCurrentProcess;
+(id)tokenFromMachMessage:(SCD_Struct_BS16*)arg1 ;
+(id)tokenFromNSXPCConnection:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)tokenFromXPCMessage:(id)arg1 ;
+(id)tokenFromAuditTokenRef:(SCD_Struct_BS15*)arg1 ;
+(id)tokenFromAuditToken:(SCD_Struct_BS15)arg1 ;
-(id)initWithXPCMessage:(id)arg1 ;
-(id)_bundleIDGeneratingIfNeeded:(BOOL)arg1 ;
-(id)_valueFromData:(id)arg1 ofType:(const char*)arg2 ;
-(id)_dataWithValue:(id)arg1 ;
-(SCD_Struct_BS15)realToken;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSString *)bundleID;
-(id)valueForEntitlement:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(int)pid;
-(id)initWithAuditToken:(SCD_Struct_BS15)arg1 ;
@end
