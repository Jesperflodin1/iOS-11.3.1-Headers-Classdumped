/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPIdentifier;

@interface CKDPUniqueFieldFailure : PBCodable <NSCopying> {

	CKDPIdentifier* _identifierForConstraintFailure;

}

@property (nonatomic,readonly) BOOL hasIdentifierForConstraintFailure; 
@property (nonatomic,retain) CKDPIdentifier * identifierForConstraintFailure;              //@synthesize identifierForConstraintFailure=_identifierForConstraintFailure - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setIdentifierForConstraintFailure:(CKDPIdentifier *)arg1 ;
-(BOOL)hasIdentifierForConstraintFailure;
-(CKDPIdentifier *)identifierForConstraintFailure;
@end

