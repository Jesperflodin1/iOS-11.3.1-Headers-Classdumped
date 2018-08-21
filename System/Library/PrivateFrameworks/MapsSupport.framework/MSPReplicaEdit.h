/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface MSPReplicaEdit : NSObject <NSCopying> {

	NSUUID* _identifierOfAffectedRecord;

}

@property (nonatomic,readonly) NSUUID * identifierOfAffectedRecord;              //@synthesize identifierOfAffectedRecord=_identifierOfAffectedRecord - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithIdentifierOfAffectedRecord:(id)arg1 ;
-(NSUUID *)identifierOfAffectedRecord;
@end

