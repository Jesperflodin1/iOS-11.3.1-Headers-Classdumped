/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPReplicaMergeOptions.h>

@class NSString;

@interface MSPFavoritesReplicaMergeOptions : NSObject <MSPReplicaMergeOptions> {

	BOOL _deserializationAllowed;

}

@property (getter=isDeserializationAllowed,readonly) BOOL deserializationAllowed;              //@synthesize deserializationAllowed=_deserializationAllowed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isDeserializationAllowed;
-(id)initWithDeserializationAllowed:(BOOL)arg1 ;
@end

