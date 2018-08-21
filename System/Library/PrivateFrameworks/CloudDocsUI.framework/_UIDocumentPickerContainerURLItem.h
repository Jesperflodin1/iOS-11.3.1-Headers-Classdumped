/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/_UIDocumentPickerContainerItem.h>

@class NSURL, NSString, NSArray, NSDate;

@interface _UIDocumentPickerContainerURLItem : _UIDocumentPickerContainerItem {

	NSURL* _url;
	long long _cachedType;
	NSString* _cachedTitle;
	NSString* _cachedSubtitle;
	NSString* _cachedSubtitle2;
	NSArray* _cachedTags;
	unsigned long long _cachedIndentation;
	NSString* _cachedSortPath;
	NSString* _cachedContentType;
	NSDate* _cachedContentModifiedDate;
	BOOL _cachedIsAlias;
	id _generationIdentifier;

}
+(id)defaultKeys;
-(id)initWithURL:(id)arg1 ;
-(id)url;
-(id)title;
-(long long)type;
-(id)subtitle;
-(unsigned long long)indentationLevel;
-(id)modificationDate;
-(id)subtitle2;
-(id)contentType;
-(id)tags;
-(BOOL)renameable;
-(BOOL)isAlias;
-(id)urlInLocalContainer;
-(void)_removeCachedValues;
-(id)sortPathComponents;
-(void)_cacheIndentationLevelWithSortPathComponents:(id)arg1 ;
-(void)_modelChanged;
-(id)sortPath;
-(BOOL)attributesModified:(id)arg1 ;
-(void)cacheValues;
@end

