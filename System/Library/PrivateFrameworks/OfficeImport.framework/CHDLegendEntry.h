/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDResources;

@interface CHDLegendEntry : NSObject {

	unsigned long long mFontIndex;
	unsigned mEntryIndex;
	EDResources* mResources;

}
-(void)dealloc;
-(id)description;
-(void)setFont:(id)arg1 ;
-(id)font;
-(unsigned)entryIndex;
-(void)setEntryIndex:(unsigned)arg1 ;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(unsigned long long)fontIndex;
@end

