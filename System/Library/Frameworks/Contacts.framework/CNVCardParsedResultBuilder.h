/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNVCardParsedResultBuilder <NSObject>
@required
-(id)build;
-(id)valueForProperty:(id)arg1;
-(BOOL)canSetValueForProperty:(id)arg1;
-(BOOL)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4;
-(BOOL)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3;
-(void)setUnknownProperties:(id)arg1;
-(id)validCountryCodes;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2;

@end
