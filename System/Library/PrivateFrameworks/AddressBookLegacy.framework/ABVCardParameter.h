/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface ABVCardParameter : NSObject {

	NSString* _name;
	NSString* _grouping;
	id _value;
	NSMutableArray* _types;
	BOOL _primary;

}
-(void)setIsPrimary:(BOOL)arg1 ;
-(void)addType:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(id)types;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)initWithName:(id)arg1 ;
-(void)addTypes:(id)arg1 ;
-(BOOL)isPrimary;
-(void)finalize;
-(id)grouping;
-(void)setGrouping:(id)arg1 ;
@end
