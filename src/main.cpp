#include "Artwork.h"
#include "Artist.h"
#include "Curator.h"
#include "DigitalArtwork.h"
#include "Exhibition.h"
#include "Gallery.h"
#include "Room.h"
#include "Visitor.h"
#include "Manager.h"
#include "MaintenanceStaff.h"
#include "Security.h"
#include "GalleryEvent.h"
#include "Ticket.h"
#include "PhysicalArtwork.h"

int main() {
    // Здесь пример использования всех классов.
    Gallery gallery(1, "Лувр", "Париж, Франция");
    gallery.ShowExhibition();

    Room room1(113, 200);
    Room room2(166, 150);
    gallery.AddRoom(room1);
    gallery.AddRoom(room2);

    DigitalArtwork digitalArt(1, "Первые 5 000 дней", "Майк Винкельман", 2021, "Aвтop paбoтaл нaд кoллaжeм бoлee 1З лeт", "NFT", "JPEG", 130);
    PhysicalArtwork physicalArt(2, "Спаситель мира", "Леонардо да Винчи", 1490, "На картине изображён Иисус Христос", "Картина", "Холст", "66см x 44см");

    room1.ShowArtwork(digitalArt);
    room2.ShowArtwork(physicalArt);

    Exhibition exhibition("Экспо Современного Искусства", "2024-10-01", "2024-10-15");
    Exhibition exhibition2("Классическое Искусство", "2024-11-01", "2024-11-15");

    gallery.AddExhibition(exhibition);
    gallery.AddExhibition(exhibition2);

    exhibition.AddArtwork(digitalArt);
    exhibition.AddArtwork(physicalArt);
    exhibition.DisplayExhibition();

    Artist artist1(3, "Винсент Ван Гог", "1853-03-30", "1890-07-29", "Знаменитый постимпрессионист");
    Artist artist2(4, "Пабло Пикассо", "1881-10-25", "1973-04-08", "Один из самых влиятельных художников 20-го века");

    artist1.DisplayInfo();
    artist2.DisplayInfo();

    Visitor visitor(5, "Артем Сотников", 18, "T001", "2024-10-15");
    visitor.DisplayInfo();

    Curator curator(6, "Валера", 45, "T987654", "2024-10-15", "Современное искусство", 20);
    curator.AddExhibition(exhibition);
    curator.DisplayInfo();
    curator.OrganizeExhibition();

    Ticket ticket("T001", "Артем Сотников", 15.0, "Экспо Современного Искусства");
    visitor.AddTicket(ticket);
    visitor.DisplayInfo();
    ticket.GetPrice();

    Manager manager("Пётр", "Современное искусство", "123-456-789");
    manager.ManageGallery();

    MaintenanceStaff maintenanceStaff(7, "Михалыч", "Техник", "Ночной");
    maintenanceStaff.PerformMaintenance();

    Security security(8, "Петрович", "Охранник", "Дневной", "Высокий", "Комната 113");
    security.PatrolRoom();

    GalleryEvent event("Аукцион Искусства", "Аукцион", "2024-10-20");
    event.HoldEvent();

    digitalArt.DisplayDigitalArt();
    physicalArt.DisplayPhysicalArt();

    return 0;
}