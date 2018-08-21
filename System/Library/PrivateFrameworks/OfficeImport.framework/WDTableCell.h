/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WDTableRow, WDTableCellProperties, WDText, NSString;

@interface WDTableCell : NSObject {

	unsigned long long mIndex;
	WDTableRow* mRow;
	WDTableCellProperties* mProperties;
	WDText* mText;
	NSString* mIdentifier;
	BOOL mUseTrackedProperties;

}
-(void)dealloc;
-(id)row;
-(id)description;
-(id)identifier;
-(id)text;
-(void)setIdentifier:(id)arg1 ;
-(unsigned long long)index;
-(id)properties;
-(void)clearProperties;
-(BOOL)useTrackedProperties;
-(void)setUseTrackedProperties:(BOOL)arg1 ;
-(id)initWithRow:(id)arg1 at:(unsigned long long)arg2 ;
-(long long)compareIndex:(id)arg1 ;
@end

