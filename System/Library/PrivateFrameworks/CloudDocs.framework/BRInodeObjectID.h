/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BRFileObjectID.h>

@interface BRInodeObjectID : BRFileObjectID {

	unsigned long long _ino;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)asString;
-(id)initWithFileID:(unsigned long long)arg1 ;
-(id)folderID;
-(BOOL)isFolderOrAliasID;
-(unsigned long long)rawID;
@end

