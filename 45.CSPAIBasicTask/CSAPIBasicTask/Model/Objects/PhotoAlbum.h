//
//  PhotoAlbum.h
//  CSAPIBasicTask
//
//  Created by Aleksandr on 13/08/2020.
//  Copyright © 2020 Aleksandr Shushkov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Attachment.h"
#import "Photo.h"

NS_ASSUME_NONNULL_BEGIN

@interface PhotoAlbum : NSObject <Attachment>

@property (strong, nonatomic) NSString *ID;
@property (strong, nonatomic) Photo *thumb;
@property (strong, nonatomic) NSString *title;

+ (instancetype)photoAlbumWithDictionary:(NSDictionary *)dicrionary;

@end

NS_ASSUME_NONNULL_END
