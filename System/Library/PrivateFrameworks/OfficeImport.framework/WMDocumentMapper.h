/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>
#import <libobjc.A.dylib/CMMapperRoot.h>

@class CMArchiveManager, WDDocument, NSString;

@interface WMDocumentMapper : CMMapper <CMMapperRoot> {

	CMArchiveManager* mArchiver;
	WDDocument* wDom;
	NSString* mFileName;

}

@property (retain) NSString * fileName; 
-(void)dealloc;
-(double)rightMargin;
-(double)topMargin;
-(id)blipAtIndex:(unsigned)arg1 ;
-(int)defaultTabWidth;
-(CGSize)pageSizeForDevice;
-(CGSize)contentSizeForDevice;
-(double)leftMargin;
-(double)headerMargin;
-(double)bottomMargin;
-(id)documentTitle;
-(void)mapDefaultCssStylesAt:(id)arg1 ;
-(BOOL)hasSessionBreakAtIndex:(unsigned long long)arg1 ;
-(id)styleMatrix;
-(NSString *)fileName;
-(id)archiver;
-(id)initWithWDom:(id)arg1 archiver:(id)arg2 ;
-(void)mapWithState:(id)arg1 ;
-(void)setFileName:(NSString *)arg1 ;
@end

