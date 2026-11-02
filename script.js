// Mengambil elemen nama dan membaca pengaturan pengurangan gerak perangkat
const namaKetik = document.querySelector("#namaKetik");
const kurangiGerakNama = window.matchMedia("(prefers-reduced-motion: reduce)");

let efekKetikNama;

// Mengatur animasi ketik nama Matius serta menampilkan nama biasa jika animasi tidak tersedia
function jalankanKetikNama() {
  if (efekKetikNama) {
    efekKetikNama.destroy();
    efekKetikNama = null;
  }

  namaKetik.textContent = "Matius";

  if (kurangiGerakNama.matches || typeof Typed === "undefined") {
    return;
  }

  namaKetik.textContent = "";

  efekKetikNama = new Typed("#namaKetik", {
    strings: ["Matius"],
    typeSpeed: 150,
    backSpeed: 150,
    backDelay: 1100,
    startDelay: 300,
    smartBackspace: false,
    loop: true,
    showCursor: true,
    cursorChar: "|",
  });
}

// Menjalankan efek ketik jika elemen nama ada dan memperbaruinya saat pengaturan gerak berubah
if (namaKetik) {
  jalankanKetikNama();

  kurangiGerakNama.addEventListener("change", jalankanKetikNama);
}

// Mengambil tombol pembuka, kotak informasi, dan tombol penutup detail kontak
const tombolKontak = document.querySelector("#tombolKontak");
const pesanKontak = document.querySelector("#pesanKontak");
const tutupPesanKontak = document.querySelector("#tutupPesanKontak");

// Menampilkan detail kontak saat tombol diklik dan menyembunyikannya saat tombol tutup diklik
if (tombolKontak && pesanKontak && tutupPesanKontak) {
  tombolKontak.addEventListener("click", function () {
    pesanKontak.classList.remove("d-none");
  });

  tutupPesanKontak.addEventListener("click", function () {
    pesanKontak.classList.add("d-none");
  });
}
