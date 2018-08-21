/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQPObjectReader.h>
#import <iWorkImport/GQPObjectHandler.h>

@class GQDSStylesheet, GQDSStyle, NSString;

@interface GQPStyleReader : NSObject <GQPObjectReader, GQPObjectHandler> {

	int mStyleType;
	CFArrayRef mEntries;
	GQDSStylesheet* mStylesheet;
	int mCurrentProperty;
	BOOL mStyleIsIdentified;
	BOOL mStyleIdentiferEqualsParentIdentifier;
	char* mIdentifier;
	char* mUid;
	char* mParentIdentifier;
	GQDSStyle* mStyle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)initWithStyleType:(int)arg1 ;
-(int)beginReadingFromReader:(xmlTextReaderRef)arg1 processor:(id)arg2 ;
-(int)doneReading:(id)arg1 ;
-(BOOL)beginProperty:(const char*)arg1 ;
-(void)handleObject:(id)arg1 ;
-(void)doneProperty;
-(void)handleBoolValue:(BOOL)arg1 ;
-(void)handleIntValue:(int)arg1 ;
-(void)handleFloatValue:(float)arg1 ;
-(void)handleDoubleValue:(double)arg1 ;
-(id)createStyle;
-(void)dealloc;
@end
