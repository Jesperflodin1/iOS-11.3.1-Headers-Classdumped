/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary;

@interface OCPPackageRelationshipCollection : NSObject {

	NSMutableDictionary* mIdentifierMap;
	NSMutableDictionary* mTypeMap;

}
-(void)dealloc;
-(id)relationshipsByType:(id)arg1 ;
-(id)relationshipForIdentifier:(id)arg1 ;
-(id)initWithRelationshipsXml:(xmlDoc*)arg1 baseLocation:(id)arg2 ;
@end
