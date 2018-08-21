/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/CRKSession.h>
#import <libobjc.A.dylib/CATRemoteConnectionDelegate.h>

@class DMFControlSessionIdentifier, NSString;

@interface CRKClassSession : CRKSession <CATRemoteConnectionDelegate> {

	unsigned short _flags;
	DMFControlSessionIdentifier* _identifier;

}

@property (assign,nonatomic) unsigned short flags;                                    //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) DMFControlSessionIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned short)flags;
-(DMFControlSessionIdentifier *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)lostBeacon;
-(void)foundBeaconWithFlags:(unsigned short)arg1 ;
-(void)setFlags:(unsigned short)arg1 ;
@end

