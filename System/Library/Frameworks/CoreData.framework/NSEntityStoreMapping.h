/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSStoreMapping.h>

@class NSEntityDescription, NSDictionary, NSArray, NSString;

@interface NSEntityStoreMapping : NSStoreMapping {

	NSEntityDescription* _entity;
	NSDictionary* _propertyMappings;
	NSArray* _primaryKeys;
	BOOL _isSingleTableEntity;
	NSString* _subentityColumn;
	unsigned _subentityID;

}
-(id)initWithEntity:(id)arg1 ;
-(id)attributeMappings;
-(id)relationshipMappings;
-(void)setPropertyMappings:(id)arg1 ;
-(void)setPrimaryKeys:(id)arg1 ;
-(void)setSingleTableEntity:(BOOL)arg1 ;
-(void)setSubentityColumn:(id)arg1 ;
-(void)setSubentityID:(unsigned)arg1 ;
-(id)propertyMappings;
-(id)primaryKeys;
-(BOOL)isSingleTableEntity;
-(id)subentityColumn;
-(unsigned)subentityID;
-(id)primaryKeyColumnDefinitions;
-(id)attributeColumnDefinitions;
-(id)foreignKeyColumnDefinitions;
-(id)foreignKeyConstraintDefinitions;
-(id)createTableStatement;
-(id)entity;
-(void)setEntity:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
@end
